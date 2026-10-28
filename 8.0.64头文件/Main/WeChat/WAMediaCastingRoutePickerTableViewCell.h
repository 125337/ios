@interface WAMediaCastingRoutePickerTableViewCell : UITableViewCell
{
    WAMediaCastingRoutePickerDeviceItem * _deviceItem; // +0x8
    MMUILabel * _deviceLabel; // +0x10
    UIView * _separatorLineView; // +0x18
    MMUILabel * _failLabel; // +0x20
    UIImageView * _successImageView; // +0x28
    MMProgressViewEx * _loadingView; // +0x30
    unsigned long long _status; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWith:(id)arg1 deviceStatus:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)deviceLabel;
- (id)separatorLineView;
- (id)failLabel;
- (id)successImageView;
- (id)loadingView;
- (id)deviceItem;
- (void)setDeviceItem:(id)arg1;
- (void)setDeviceLabel:(id)arg1;
- (void)setSeparatorLineView:(id)arg1;
- (void)setFailLabel:(id)arg1;
- (void)setSuccessImageView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
