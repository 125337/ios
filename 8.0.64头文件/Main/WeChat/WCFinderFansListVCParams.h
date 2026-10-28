@interface WCFinderFansListVCParams : NSObject
{
    WCFinderContact * _contact; // +0x8
    unsigned long long _totalFansCount; // +0x10
}
+ (id)paramsWithContact:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)totalFansCount;
- (void)setTotalFansCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
