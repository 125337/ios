@interface WCFinderMusicAuthorsActionSheet : WCActionSheet <WCFinderMusicSingleAuthorViewDelegate>
{
    int _commentScene; // +0x8
    id <WCFinderMusicAuthorsActionSheetDelegate> _authorDelegate; // +0x10
    FinderMusicTopicInfo * _musicTopicInfo; // +0x18
    UIView * _tipsView; // +0x20
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)didClickClose;
- (void)onClickSingleAuthorAction:(id)arg1;
- (id)authorDelegate;
- (void)setAuthorDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end
