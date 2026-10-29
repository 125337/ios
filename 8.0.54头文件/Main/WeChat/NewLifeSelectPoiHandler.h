@interface NewLifeSelectPoiHandler : NewLifeActionHandler <WCTimelinePOIPickerViewControllerDelegate>
{
    FinderLocation * _location; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIPickerCancel;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end

