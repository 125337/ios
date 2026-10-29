@interface WCSearchPageState : NSObject
{
    BOOL _isEditting; // +0x8
    BOOL _isFromVertical; // +0x9
    unsigned long long _contentType; // +0x10
    WebSearchContext * _data; // +0x18
    WCSearchUIConfig * _uiConfig; // +0x20
}
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (void)refreshData;
- (BOOL)isBrandVertSearch;
- (BOOL)isSubSearch;
- (BOOL)isImageSearch;
- (BOOL)isFromDiscoverSearch;
- (unsigned long long)contentType;
- (BOOL)isVertSearh;
- (BOOL)isBackButtonDirectExit;
- (BOOL)isShowCancelButton;
- (BOOL)isShowBackButton;
- (BOOL)isShowCancelButtonByExpt;
- (BOOL)initiativeImageSearchEnabled;
- (BOOL)needEditingAtBegining;
- (void)setContentType:(unsigned long long)arg1;
- (BOOL)isEditting;
- (void)setIsEditting:(BOOL)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (BOOL)isFromVertical;
- (void)setIsFromVertical:(BOOL)arg1;
- (void).cxx_destruct;
@end
