@interface WCAdHeadStateView : MMUIView <IWCAdHeadStateExt>
{
    WCAdURLImageView * _headStateImageView; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCAdHeadStateInfo * _stateInfo; // +0x18
}
- (id)initWithDataItem:(id)arg1 stateInfo:(id)arg2;
- (void)setupUI;
- (id)headStateImageView;
- (void)updateHeadState;
- (void)dealloc;
- (void)onAdHeadReadStateChanged;
- (void)setHeadStateImageView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)stateInfo;
- (void)setStateInfo:(id)arg1;
- (void).cxx_destruct;
@end
