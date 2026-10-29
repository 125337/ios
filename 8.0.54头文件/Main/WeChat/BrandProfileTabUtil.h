@interface BrandProfileTabUtil : NSObject
+ (void)fetchFinderAudioUserPageData:(id)arg1 lastBuffer:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
+ (void)fetchFinderCollectionList:(id)arg1 lastBuffer:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
+ (id)audioCollectionWithCategory:(id)arg1 bizUsername:(id)arg2 categoryItem:(id)arg3 reportInfo:(id)arg4 clickAction:(id /* block */)arg5;
+ (BOOL)useHeaderServiceMenu;
@end

