@interface MMLiveAudioRoomSubTitleView : UIView <MMFinderLiveSubTitleSynchronizeExt, MMLiveConnectMicSubtitleDataModelExt>
{
    BOOL _canShow; // +0x8
    BOOL _hasContent; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMLiveAudioRoomSubTitleViewDelegate> _subTitleDelegate; // +0x18
    MMLiveAudioRoomSubTitleLineView * _topLineView; // +0x20
    MMLiveAudioRoomSubTitleLineView * _bottomLineView; // +0x28
    MMLiveAudioRoomSubTitleLineView * _outgoingLineView; // +0x30
    MMFinderLiveConnectMicUsersInfo * _micUsersInfo; // +0x38
    unsigned long long _lastSubtitleSeq; // +0x40
    unsigned long long _topLineChnIndex; // +0x48
    unsigned long long _bottomLineChnIndex; // +0x50
    unsigned long long _currentLineCount; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)snapLineViewsToStableEndState;
- (void)relayoutLineViews;
- (void)setCanShow:(BOOL)arg1;
- (void)setHasContent:(BOOL)arg1;
- (void)updateEffectiveHidden;
- (id)getLiveTask;
- (void)updateWithConnectMicUsersInfo:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onSynchronizedLiveConnectMicSubTitle:(id)arg1 taskId:(id)arg2;
- (BOOL)isChnIndexCancelled:(unsigned long long)arg1;
- (id)placeholderDataInfoFromExisting:(id)arg1;
- (BOOL)lineNeedsCancelRefresh:(id)arg1 chnIndex:(unsigned long long)arg2;
- (void)refreshCancelledLineViewsInPlace;
- (void)onLiveConnectMicSubtitleDataModelRecalledIndexListUpdatedWithTaskId:(id)arg1 recalledIndexList:(id)arg2;
- (id)resolveDataInfoWithUserId:(id)arg1 content:(id)arg2;
- (void)appendNewLineWithDataInfo:(id)arg1;
- (void)updateCurrentLineWithDataInfo:(id)arg1;
- (void)updateTopLineWithDataInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)subTitleDelegate;
- (void)setSubTitleDelegate:(id)arg1;
- (BOOL)canShow;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)outgoingLineView;
- (void)setOutgoingLineView:(id)arg1;
- (id)micUsersInfo;
- (void)setMicUsersInfo:(id)arg1;
- (unsigned long long)lastSubtitleSeq;
- (void)setLastSubtitleSeq:(unsigned long long)arg1;
- (unsigned long long)topLineChnIndex;
- (void)setTopLineChnIndex:(unsigned long long)arg1;
- (unsigned long long)bottomLineChnIndex;
- (void)setBottomLineChnIndex:(unsigned long long)arg1;
- (unsigned long long)currentLineCount;
- (void)setCurrentLineCount:(unsigned long long)arg1;
- (BOOL)hasContent;
- (void).cxx_destruct;
@end
