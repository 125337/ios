@interface WCFinderPostReoprtModuleModel : NSObject <PBCoding>
{
    int _endReasonType; // +0x8
    NSString * _pageName; // +0x10
    NSString * _moduleName; // +0x18
    NSString * _identification; // +0x20
    long long _startTimeStamp; // +0x28
    long long _endTimeStamp; // +0x30
    long long _duration; // +0x38
}
+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_startTimeStamp;
+ (void)PBArrayAdd_endTimeStamp;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_endReasonType;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)getKeyNameByPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
+ (id)getKeyNameByPageName:(id)arg1 moduleName:(id)arg2;
- (id)getPBPropertyTable;
- (id)initWithPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (id)initWithModuleName:(id)arg1 identification:(id)arg2;
- (void)setEndTimeStamp:(long long)arg1;
- (id)currentKey;
- (id)currentModelKey;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)identification;
- (void)setIdentification:(id)arg1;
- (long long)startTimeStamp;
- (void)setStartTimeStamp:(long long)arg1;
- (long long)endTimeStamp;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (int)endReasonType;
- (void)setEndReasonType:(int)arg1;
- (void).cxx_destruct;
@end

