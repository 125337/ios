@interface WCAdRollView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    NSString * _iconUrl; // +0x10
    WCAdURLImageView * _rollIcon; // +0x18
    WCAdRollTextView * _rollText; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 iconUrl:(id)arg3 textList:(id)arg4;
- (void)setTextList:(id)arg1;
- (void)initView;
- (void)onViewDisplay:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)rollIcon;
- (void)setRollIcon:(id)arg1;
- (id)rollText;
- (void)setRollText:(id)arg1;
- (void).cxx_destruct;
@end
