@interface MMLiveKtvThemeRepository : NSObject
{
    NSMutableDictionary * _items; // +0x8
    MMLiveQueue * _requests; // +0x10
}
- (id)init;
- (void)fetchThemeWithId:(id)arg1 fetchingProvider:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)fetchAllThemesWithFetchingProvider:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invokeFrontTask;
- (id)items;
- (void)setItems:(id)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;
- (void).cxx_destruct;
@end
