@interface WCFinderLiveProfileInteractionInfoView : MMUIView
{
    NSMutableArray * _itemLabels; // +0x8
    UIView * _seperatorLine; // +0x10
    FinderAudienceLiveInfo * _info; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithAudienceLiveInfo:(id)arg1;
- (id)itemLabels;
- (void)setItemLabels:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
