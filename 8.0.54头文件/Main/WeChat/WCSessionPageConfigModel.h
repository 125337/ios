@interface WCSessionPageConfigModel : MMObject <PBCoding>
{
    NSMutableArray * _pagePaths; // +0x8
    NSMutableDictionary * _pagePathsDicForKey; // +0x10
    NSMutableDictionary * _pagePathsDicForSid; // +0x18
}
+ (void)PBArrayAdd_pagePaths;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (id)pagePaths;
- (void)setPagePaths:(id)arg1;
- (id)pagePathsDicForKey;
- (void)setPagePathsDicForKey:(id)arg1;
- (id)pagePathsDicForSid;
- (void)setPagePathsDicForSid:(id)arg1;
- (void).cxx_destruct;
@end

