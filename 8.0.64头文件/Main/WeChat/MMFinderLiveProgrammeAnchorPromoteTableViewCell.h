@interface MMFinderLiveProgrammeAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    UIImageView * _iconImageView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _startTimeLabel; // +0x50
    UIView * _splitView; // +0x58
    MMUILabel * _detailLabel; // +0x60
    MMFinderLiveProgrammeAnchorPromoteInfo * _programmaPromoteInfo; // +0x68
}
+ (id)identifier;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutIconImgView;
- (void)layoutTitleLabel;
- (void)layoutStartTimeLabel;
- (void)layoutSplitView;
- (void)layoutDetailLabel;
- (void)updateLabelsOriginY;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)startTimeLabel;
- (void)setStartTimeLabel:(id)arg1;
- (id)splitView;
- (void)setSplitView:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)programmaPromoteInfo;
- (void)setProgrammaPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end
