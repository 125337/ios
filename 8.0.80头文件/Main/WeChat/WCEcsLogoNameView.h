@interface WCEcsLogoNameView : MMUIButton
{
    InteractionLabel * _nameLabel; // +0x8
    NSString * _snsFeedId; // +0x10
    WCDataItem * _dataItem; // +0x18
    UIImageView * _logoImageView; // +0x20
    UIFont * _labelFont; // +0x28
    unsigned long long _scene; // +0x30
    EcsShareSnsInfo * _shareInfo; // +0x38
    NSString * _feedTailText; // +0x40
}
- (id)initWithEcsShareSnsInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)updateWithEcsShareSnsInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)setDataItem:(id)arg1;
- (void)bindOracleSession;
- (void)initLogoImageView;
- (void)initNameLabelWithName:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onEcsLogoNameViewClick:(id)arg1;
- (void)onWillDisplay;
- (void)configFeedTailReport;
- (id)genFeedTailReportDict;
- (void)report38028WithEventId:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)snsFeedId;
- (void)setSnsFeedId:(id)arg1;
- (id)dataItem;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg1;
- (id)labelFont;
- (void)setLabelFont:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)feedTailText;
- (void)setFeedTailText:(id)arg1;
- (void).cxx_destruct;
@end
