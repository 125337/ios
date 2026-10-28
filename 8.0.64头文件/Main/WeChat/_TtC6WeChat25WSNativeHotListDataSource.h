@interface _TtC6WeChat25WSNativeHotListDataSource : NSObject <MMTListAdapterDataSource>
{
     verticalEntryData; // +0x8
     historyData; // +0x10
     subscriptionEntryData; // +0x18
     hotSearchData; // +0x20
     settingData; // +0x28
     session; // +0x30
     isAdHidden; // +0x38
}
- (id)settingData;
- (id)initWithSession:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
