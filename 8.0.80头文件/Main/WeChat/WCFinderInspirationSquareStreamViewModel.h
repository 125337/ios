@interface WCFinderInspirationSquareStreamViewModel : NSObject
{
    int _streamCommentScene; // +0x8
    int _scene; // +0xc
    int _tabId; // +0x10
    int _fromScene; // +0x14
    WCFinderStreamLoadingState * _loadingState; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    id <WCFinderInspirationSquareStreamViewModelDelegate> _delegate; // +0x28
    WCFinderPostPlayInfo * _playInfo; // +0x30
    unsigned long long _topicID; // +0x38
    NSString * _byPassInfo; // +0x40
    NSString * _jumpInfoNativeByPassInfo; // +0x48
    NSString * _refTid; // +0x50
    NSData * _lastBuffer; // +0x58
    NSString * _fromSessionBuffer; // +0x60
    NSMutableDictionary * _cardRequestTimeMsByFeedId; // +0x68
}
+ (void)requestWithTopicID:(unsigned long long)arg1 tabId:(unsigned long long)arg2 refTid:(id)arg3 byPassInfo:(id)arg4 feedArray:(id)arg5 loadingState:(id)arg6 scene:(int)arg7 fromSessionBuffer:(id)arg8 fromScene:(int)arg9;
- (id)initWithScene:(int)arg1 topicID:(unsigned long long)arg2 byPassInfo:(id)arg3 jumpInfoNativeByPassInfo:(id)arg4 tabId:(int)arg5 refTid:(id)arg6 fromSessionBuffer:(id)arg7 fromScene:(int)arg8;
- (void)requestData;
- (unsigned long long)cardRequestTimeMsForFeedId:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)streamCommentScene;
- (void)setStreamCommentScene:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (int)tabId;
- (void)setTabId:(int)arg1;
- (unsigned long long)topicID;
- (void)setTopicID:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)jumpInfoNativeByPassInfo;
- (void)setJumpInfoNativeByPassInfo:(id)arg1;
- (id)refTid;
- (void)setRefTid:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)fromSessionBuffer;
- (void)setFromSessionBuffer:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)cardRequestTimeMsByFeedId;
- (void)setCardRequestTimeMsByFeedId:(id)arg1;
- (void).cxx_destruct;
@end
