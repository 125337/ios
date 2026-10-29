@interface DeepLinkParam : NSObject
{
    BOOL _skipIntermediatePages; // +0x8
    NSArray * linkArray; // +0x10
    UINavigationController * _weakNavigationController; // +0x18
}
+ (id)DeepLinkParamWithLink:(id)arg1;
+ (id)DeepLinkParamWithLink:(id)arg1 skipIntermediatePages:(BOOL)arg2;
- (id)init;
- (id)NextDeepLinkParam;
- (id)NextDeepLinkParam:(BOOL)arg1;
- (id)linkArray;
- (void)setLinkArray:(id)arg1;
- (BOOL)skipIntermediatePages;
- (void)setSkipIntermediatePages:(BOOL)arg1;
- (id)weakNavigationController;
- (void)setWeakNavigationController:(id)arg1;
- (void).cxx_destruct;
@end
