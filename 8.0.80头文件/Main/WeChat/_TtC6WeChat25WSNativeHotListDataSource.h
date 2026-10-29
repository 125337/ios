@interface _TtC6WeChat25WSNativeHotListDataSource : NSObject <MMTListAdapterDataSource>
{
     verticalEntryData; // +0x8
     historyData; // +0x10
     subscriptionEntryData; // +0x18
     hotSearchData; // +0x20
     validExposureTracker; // +0x28
    _TtC6WeChat26WSNativeHotListSettingData * settingData; // +0x30
     session; // +0x38
     isAdHidden; // +0x40
}
- (id)settingData;
- (id)initWithSession:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
