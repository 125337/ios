@interface SessionFoldCache : NSObject <PBCoding>
{
    BOOL _isFolded; // +0x8
    NSMutableDictionary * _dicUserNameFold; // +0x10
}
+ (void)PBArrayAdd_dicUserNameFold;
+ (void)PBArrayAdd_isFolded;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dicUserNameFold;
- (void)setDicUserNameFold:(id)arg1;
- (BOOL)isFolded;
- (void)setIsFolded:(BOOL)arg1;
- (void).cxx_destruct;
@end

