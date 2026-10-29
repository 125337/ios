@interface CBTMomentTabBarConfig : NSObject
{
    BOOL _needIndicator; // +0x8
    unsigned long long _defaultIndex; // +0x10
    NSArray * _infoArray; // +0x18
}
- (unsigned long long)defaultIndex;
- (void)setDefaultIndex:(unsigned long long)arg1;
- (id)infoArray;
- (void)setInfoArray:(id)arg1;
- (BOOL)needIndicator;
- (void)setNeedIndicator:(BOOL)arg1;
- (void).cxx_destruct;
@end
