@interface POIFlutterAPI : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)updateFavoriteStateSelected:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateScrollStateProgress:(double)arg1 completion:(id /* block */)arg2;
- (void)scrollToTopWithCompletion:(id /* block */)arg1;
- (void)updateSubAddressSubAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadHeadWithInfoPoiBasicInfoPBData:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadHeadWithServiceInfoPoiServiceInfoPBData:(id)arg1 completion:(id /* block */)arg2;
- (void)updateInitPageTabListData:(id)arg1 defaultTabIndex:(long long)arg2 defaultFilterIndex:(long long)arg3 streamUpdateData:(id)arg4 completion:(id /* block */)arg5;
- (void)appendPoiStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 streamUpdateData:(id)arg3 completion:(id /* block */)arg4;
- (void)noMorePoiStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)showShareMpEntryWithCompletion:(id /* block */)arg1;
- (void)insertMpPoiStreamMpPoiProfileData:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
