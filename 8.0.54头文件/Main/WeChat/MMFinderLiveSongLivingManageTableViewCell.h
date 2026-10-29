@interface MMFinderLiveSongLivingManageTableViewCell : MMFinderLiveSongManageTableViewCell
{
    BOOL _isPreparedToSing; // +0x8
    PAGView * _playingAnimationView; // +0x10
    MMUILabel * _rankLabel; // +0x18
    MMUILabel * _requestMemDescLabel; // +0x20
    MMUILabel * _heartValueLabel; // +0x28
    MMUIButton * _finishButton; // +0x30
    MMUIButton * _singButton; // +0x38
}
+ (double)preferHeight;
+ (id)identifier;
+ (double)getSeparatorLeftInset;
- (id)createFinishButton;
- (id)createRequestMemDescLabel;
- (id)createRankLabel;
- (id)createHeartValueLabel;
- (id)createSingButton;
- (void)prepareForReuse;
- (void)onTapGesture:(id)arg1;
- (void)reset;
- (void)layoutUI;
- (void)updateMusicLabel;
- (void)updateMusicNameLabelOrigin;
- (void)updateMusicLabelWidth;
- (void)refreshUI;
- (void)setRankIndex:(unsigned int)arg1;
- (double)warningPadding;
- (void)layoutRankLabel;
- (void)layoutRequestMemDescLabel;
- (void)layoutFinishButton;
- (void)layoutHeartValueLabel;
- (void)layoutPlayingAnimationView;
- (void)layoutSingButton;
- (void)updateRankLabel;
- (void)updateRequestMemDescLabel;
- (id)getDisplayMemNames;
- (unsigned long long)getDisplayMemCount;
- (BOOL)shouldHideHeartValueLabel;
- (void)updateHeartValueLabel;
- (void)updateFinishButton;
- (void)updatePlayingAnimationView;
- (void)setIsPreparedToSing:(BOOL)arg1;
- (void)finishButtonAction;
- (void)singButtonAction;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (double)adjustedLeftOffsetForEditing;
- (BOOL)isPreparedToSing;
- (id)playingAnimationView;
- (void)setPlayingAnimationView:(id)arg1;
- (id)rankLabel;
- (id)requestMemDescLabel;
- (id)heartValueLabel;
- (id)finishButton;
- (id)singButton;
- (void).cxx_destruct;
@end

