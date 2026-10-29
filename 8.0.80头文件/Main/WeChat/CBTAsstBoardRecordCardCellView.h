@interface CBTAsstBoardRecordCardCellView : CBTAsstBoardBaseCellView
{
    UIView * _cardContainer; // +0x8
    UILabel * _recordNameLabel; // +0x10
    UILabel * _durationLabel; // +0x18
    UIImageView * _docIconView; // +0x20
}
- (void)setupUI;
- (void)updateDocIcon;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupCellWithViewModel:(id)arg1;
- (BOOL)needsBubbleBackground;
- (id)cardContainer;
- (void)setCardContainer:(id)arg1;
- (id)recordNameLabel;
- (void)setRecordNameLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)docIconView;
- (void)setDocIconView:(id)arg1;
- (void).cxx_destruct;
@end
