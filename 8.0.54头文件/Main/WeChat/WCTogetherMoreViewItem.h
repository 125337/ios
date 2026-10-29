@interface WCTogetherMoreViewItem : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _hasMoreData; // +0x9
    NSString * _tipsText; // +0x10
}
- (Class)cellClass;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (void).cxx_destruct;
@end

