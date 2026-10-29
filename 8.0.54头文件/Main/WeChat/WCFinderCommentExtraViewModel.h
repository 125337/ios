@interface WCFinderCommentExtraViewModel : NSObject
{
    BOOL _topLinkExposed; // +0x8
    int _scene; // +0xc
    int _sourceScene; // +0x10
    id <WCFinderCommentExtraViewModelDelegate> _delegate; // +0x18
    NSString * _enterSessionId; // +0x20
    NSString * _topLinkText; // +0x28
    FinderJumpInfo * _linkJumpInfo; // +0x30
    unsigned long long _requestId; // +0x38
    ProductCommentInfo * _shopInfo; // +0x40
    WAAppOpenParameter * _shopCommentInfoParam; // +0x48
    unsigned long long _shopCommentCount; // +0x50
    long long _productInfoSource; // +0x58
    NSString * _tid; // +0x60
    WCFinderKeywordComponent * _keyword; // +0x68
}
- (id)initWithTid:(id)arg1 scene:(int)arg2 sourceScene:(int)arg3;
- (void)regenEnterSessionId;
- (WCFinderKeywordAction)topLinkActionForUrl:(id)arg1;
- (void)startRequest;
- (void)_handleLinkTips:(id)arg1;
- (void)setShopInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (id)topLinkText;
- (void)setTopLinkText:(id)arg1;
- (BOOL)topLinkExposed;
- (void)setTopLinkExposed:(BOOL)arg1;
- (id)linkJumpInfo;
- (void)setLinkJumpInfo:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)shopInfo;
- (id)shopCommentInfoParam;
- (void)setShopCommentInfoParam:(id)arg1;
- (unsigned long long)shopCommentCount;
- (void)setShopCommentCount:(unsigned long long)arg1;
- (long long)productInfoSource;
- (void)setProductInfoSource:(long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (int)sourceScene;
- (void)setSourceScene:(int)arg1;
- (void).cxx_destruct;
@end

