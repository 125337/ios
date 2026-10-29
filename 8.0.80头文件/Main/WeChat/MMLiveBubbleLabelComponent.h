@interface MMLiveBubbleLabelComponent : UILabel <MMLiveBubbleComponent>
{
    MMLiveBubbleLabelComponentInfo * _info; // +0x8
    NSString * _infoRawJSON; // +0x10
}
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (void).cxx_destruct;
@end
