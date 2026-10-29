@interface WAAuthManagerListContainerViewModel : NSObject
{
    double _viewHeight; // +0x8
    WAContact * _contact; // +0x10
    WAAuthManagerSectionViewModel * _weappUserInfoViewModel; // +0x18
    NSArray * _arrPluginUserInfoViewModel; // +0x20
}
- (double)viewHeight;
- (void)setViewHeight:(double)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)weappUserInfoViewModel;
- (void)setWeappUserInfoViewModel:(id)arg1;
- (id)arrPluginUserInfoViewModel;
- (void)setArrPluginUserInfoViewModel:(id)arg1;
- (void).cxx_destruct;
@end

