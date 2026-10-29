@interface WCFinderEntryExposeInfo : NSObject <PBCoding>
{
    BOOL _isIgnore; // +0x8
    NSString * _path; // +0x10
    unsigned long long _businessType; // +0x18
    NSString * _redDotId; // +0x20
}
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_redDotId;
+ (void)PBArrayAdd_isIgnore;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithPath:(id)arg1 businessType:(unsigned long long)arg2 redDotId:(id)arg3 isIgnore:(BOOL)arg4;
- (BOOL)redDotHasExpose;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)redDotId;
- (void)setRedDotId:(id)arg1;
- (BOOL)isIgnore;
- (void)setIsIgnore:(BOOL)arg1;
- (void).cxx_destruct;
@end

