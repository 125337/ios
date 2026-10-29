@interface MsgMediaGroupViewItem : NSObject
{
    BaseMessageViewModel * _model; // +0x8
    MsgMediaGroupCard * _view; // +0x10
    MsgMediaGroupLayoutInfo * _layoutInfo; // +0x18
}
- (id)model;
- (void)setModel:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@end
