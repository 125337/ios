@interface MessageShareHelper : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    NSString * _sessionId; // +0x8
    long long _forwardType; // +0x10
    CMessageWrap * _messageWrap; // +0x18
    MMScrollActionSheet * _scrollActionSheet; // +0x20
    NSMutableArray * _firstRow; // +0x28
    NSMutableArray * _secondRow; // +0x30
}
- (CGSize)iconSize;
- (void)onForwardToContact:(id)arg1;
- (void)addForward;
- (void)addFavorite;
- (void)addOpenByOtherApp:(id /* block */)arg1;
- (void)addMsgLocate:(unsigned long long)arg1;
- (void)addSavePhoto:(id)arg1;
- (void)addSaveVideo:(id)arg1;
- (id)initWithForwardType:(long long)arg1;
- (void)dealloc;
- (id)firstRow;
- (id)secondRow;
- (void)addItem:(unsigned long long)arg1 action:(id /* block */)arg2;
- (void)shareMessage:(id)arg1 inViewController:(id)arg2;
- (void)dismiss:(BOOL)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)forwardType;
- (void)setForwardType:(long long)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void)setFirstRow:(id)arg1;
- (void)setSecondRow:(id)arg1;
- (void).cxx_destruct;
@end
