#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<map> 
#include<multimap>
#include<unordered_map>
using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//    	
//        vector<int> target_v;
//        vector<int> temp=nums;
//        sort(nums.begin(), nums.end());
//        for(int i = 0;i<nums.size();i++)
//        {
////        	cout << "i=" << i <<endl; 
//            int left = i;
//            int right = nums.size() - 1;
//            int mid = (left + right)/2;
//            int flag = mid;
//            while(true)
//            {
//                if (nums[i]+nums[right] == target)
//                {
//                    target_v = find_pos(temp, nums[i], nums[right]);
//                    return target_v;
//                }
//                else
//                {
//                    flag = mid;
//                    if (nums[i]+nums[mid]==target)
//                    {
//                       	target_v = find_pos(temp, nums[i], nums[mid]);
//                    	return target_v;
//                    }
//                    else if(nums[i]+nums[mid] > target)
//                    {
//                        right = mid;
//                        mid = (left + right)/2;
//                    }
//                    else if(nums[i]+nums[mid]<target)
//                    {
//                        left = mid;
//                        mid = (left + right)/2;
//                    }
//                    if(flag == mid)
//                        break;
//                    else
//                        flag = mid;       
//                }  
//            }
//        }
//        return target_v;
//    }
//	
//	vector<int> find_pos(vector<int>&nums, int a, int b)
//	{
////		cout << "找位置" << endl;
////		cout << a << " " << b << endl; 
//		vector<int> answer;
//		int flag = 0;
//		for(int i =0; i< nums.size(); i++)
//		{
//			if (nums[i]==a&&flag==0)
//			{
//				answer.push_back(i);
//				flag =1;
//			}		
//			else if(nums[i]==b)
//			{
//				answer.push_back(i);
//			}
//		}
////		for(int i =0; i< answer.size(); i++)
////		{
////	        cout << "size = " << answer.size() << endl;
////			cout << answer[i] << " . " ;
////		}
//		
//		return answer;
//	}	
//};

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        map<int, int> nums_m;
//        vector<int> result;
//        for(int i = 0;i<nums.size();i++)
//        {
//            nums_m.insert(make_pair(nums[i], i));
//        }
//        for(map<int,int>::iterator it = nums_m.begin(); it!= nums_m.end(); it++)
//        {
//        	cout <<"nums_M" << endl;
//        	cout << it->first << " " << it->second << endl; 
//		}
//
//        for(int i = 0;i<nums.size();i++)
//        {
//            map<int, int>::iterator pos = nums_m.find(target-nums[i]);
//            if (pos!=nums_m.end())
//            {
//            	map<int, int>::iterator pos_t = nums_m.find(nums[i]);
//            	if(pos!= pos_t)
//            	{
//            		cout << "1" <<endl;
//            		result.push_back(i);
//                	result.push_back(pos->second);
//                	return result;
//				}
//				else
//				{
//					cout << "2" <<endl;
////					pos++;
//					cout << pos->first << endl;
//					cout << pos->second << endl;
//					
//					result.push_back(i);
//                	result.push_back(pos->second);
//                	return result;
//				}
//
//            }
//        }
//        
//       
//        return result;
//    }
//};

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		multimap
		vector<int> v;
		unordered_map<int, int> hashtable;
		for (int i = 0; i < nums.size(); i++)
		{
			hashtable.insert(make_pair(nums[i], i));
		}
		unordered_map<int, int>::iterator del = hashtable.begin();
		for (; del != hashtable.end(); del++)
		{
			cout << del->first << " value:  "<< del->second << endl;
		}
		//for (int i = 0; i < nums.size(); ++i, ++del) {
		//	hashtable.erase(del);
		//	unordered_map<int, int>::iterator it = hashtable.find(target - nums[i]);
		//	if (it != hashtable.end()) {
		//		v.push_back(i);
		//		v.push_back(it->second);
		//		return v;
		//	}
		//}
		return v;
	}
};


class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] indexs = new int[2];
        
        // 建立k-v ，一一对应的哈希表
        HashMap<Integer,Integer> hash = new HashMap<Integer,Integer>();
        for(int i = 0; i < nums.length; i++){
            if(hash.containsKey(nums[i])){
                indexs[0] = i;
                indexs[1] = hash.get(nums[i]);
                return indexs;
            }
            // 将数据存入 key为补数 ，value为下标
            hash.put(target-nums[i],i);
        }
        // // 双重循环 循环极限为(n^2-n)/2 
        // for(int i = 0; i < nums.length; i++){
        //     for(int j = nums.length - 1; j > i; j --){
        //         if(nums[i]+nums[j] == target){
        //            indexs[0] = i;
        //            indexs[1] = j; 
        //            return indexs;
        //         }
        //     }
        // }
        return indexs;
    }
}

int main() {
	vector<int> v;
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(9);


	int num = 8;
	Solution s;
	vector<int>a = s.twoSum(v, num);
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << *it << " ";
	}
	system("pause");
	return 0;
}