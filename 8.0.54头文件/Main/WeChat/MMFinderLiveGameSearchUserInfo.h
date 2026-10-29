@interface MMFinderLiveGameSearchUserInfo : MMFinderLiveGameUserInfo
{
    BOOL _isAdded; // +0x8
    NSString * _shortAppname; // +0x10
}
- (id)initWithPBItem:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromPBItem:(id)arg1;
- (BOOL)isAdded;
- (void)setIsAdded:(BOOL)arg1;
- (id)shortAppname;
- (void)setShortAppname:(id)arg1;
- (void).cxx_destruct;
@end

