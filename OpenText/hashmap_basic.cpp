#include <iostream>
#include <map>
#include <unordered_map>
//#include <ordered_map>

using namespace std;

int main()
{
    //create map 
    unordered_map<string,int> map1;
    //create pairs
    pair<string,int> pair1=make_pair("aakriti",1);
    pair<string,int> pair2("keshav",2);
    
    //insert pairs 
    map1.insert(pair1);
    map1.insert(pair2);
    //create and insert pair at once 
    map1["divyanshi"]=4;
    
    //search pair
    cout<<map1["aakriti"]<<endl;
    cout<<map1.at("keshav")<<endl;
    
    //search pair that do not exist 
    //cout<<map1.at("idontexist")<<endl;
    /*  terminate called after throwing an instance of 'std::out_of_range'
        what():  _Map_base::at
    */
    
    cout<<map1["idontexist"]<<endl; //this 1st create the pair and then display its value 
    cout<<map1.at("idontexist")<<endl; //no error as pair is created in previous line 
    
    //size of map 
    cout<<map1.size()<<endl;
    
    //check presence of a key 
    cout<< map1.count("aakriti")<<endl; //count 1 
    cout<< map1.count("keydontexist")<<endl; //count 0 
    
    //erase
    
    map1.erase("aakriti");
    cout<< map1.count("aakriti")<<endl;
    
    //iterate using for loop 
    cout<<endl<<"unordered map so no proper order of key inserted  " <<endl; 
    for(auto i :map1)
    {
        cout<<i.first<<" and "<<i.second<<endl ; 
    }
    
    cout<<endl<<"using ordered map for proper order of key inserted  " <<endl; 
    
    map<string,int> map2 ;
    
    pair<string,int> pair3 = make_pair("aakriti_first",1);
    map2.insert(pair3);
    
    pair<string,int> pair4("keshav_second",2);
    map2.insert(pair4);
    
    map2["divyasnhi_third"]=3;
    //iterate using iterator
    map<string,int> :: iterator it=map2.begin();
    while(it!=map2.end())
    {
        cout<<it->first<<" and "<<it->second<<endl;
        it++;
    }
    
    return 0 ; 
}
