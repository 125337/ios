@interface MMFinderLiveGetLiveMessageRespContext : NSObject
{
    BOOL _isNeverJoinFanclub; // +0x8
    unsigned int _isHistoryMsg; // +0xc
    NSMutableArray * _enableExtraSyncCmds; // +0x10
    NSMutableArray * _notifyExtraSyncCmds; // +0x18
    NSMutableArray * _disableExtraSyncCmds; // +0x20
    NSMutableArray * _originalMsgList; // +0x28
    NSMutableArray * _originalAppMsgList; // +0x30
    FinderLiveCheerInfo * _cheerInfo; // +0x38
    FinderLiveMicInfo * _liveMicInfo; // +0x40
    FinderLiveRealnameLikeBubbleInfo * _realnameLikeBubbleInfo; // +0x48
    FinderLiveNoticeBubbleInfo * _noticeBubbleInfo; // +0x50
    FinderLiveContact * _anchorContact; // +0x58
}
- (unsigned int)isHistoryMsg;
- (void)setIsHistoryMsg:(unsigned int)arg1;
- (id)enableExtraSyncCmds;
- (void)setEnableExtraSyncCmds:(id)arg1;
- (id)notifyExtraSyncCmds;
- (void)setNotifyExtraSyncCmds:(id)arg1;
- (id)disableExtraSyncCmds;
- (void)setDisableExtraSyncCmds:(id)arg1;
- (id)originalMsgList;
- (void)setOriginalMsgList:(id)arg1;
- (id)originalAppMsgList;
- (void)setOriginalAppMsgList:(id)arg1;
- (id)cheerInfo;
- (void)setCheerInfo:(id)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (id)realnameLikeBubbleInfo;
- (void)setRealnameLikeBubbleInfo:(id)arg1;
- (id)noticeBubbleInfo;
- (void)setNoticeBubbleInfo:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (BOOL)isNeverJoinFanclub;
- (void)setIsNeverJoinFanclub:(BOOL)arg1;
- (void).cxx_destruct;
@end

