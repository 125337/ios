@interface EmoticonRecommendTabConfig : NSObject
{
    BOOL _enableRecommendTab; // +0x8
    BOOL _useLocalModel; // +0x9
    BOOL _recommendTabPlayGif; // +0xa
    BOOL _customTabPlayGif; // +0xb
    BOOL _enableParallelDownload; // +0xc
}
- (id)init;
- (BOOL)enableRecommendTab;
- (void)setEnableRecommendTab:(BOOL)arg1;
- (BOOL)useLocalModel;
- (void)setUseLocalModel:(BOOL)arg1;
- (BOOL)recommendTabPlayGif;
- (void)setRecommendTabPlayGif:(BOOL)arg1;
- (BOOL)customTabPlayGif;
- (void)setCustomTabPlayGif:(BOOL)arg1;
- (BOOL)enableParallelDownload;
- (void)setEnableParallelDownload:(BOOL)arg1;
@end
