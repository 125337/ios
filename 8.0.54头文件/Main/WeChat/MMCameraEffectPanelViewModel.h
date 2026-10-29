@interface MMCameraEffectPanelViewModel : NSObject
{
    id <MMCameraEffectPanelViewModelDelegate> _delegate; // +0x8
    NSArray * _funnyInfos; // +0x10
}
+ (unsigned long long)templateSceneWithCaptureScene:(unsigned long long)arg1;
- (void)fetchFunnyInfosWithFinderUserName:(id)arg1 params:(id)arg2;
- (void)fetchFunnyInfoWithShortURL:(id)arg1;
- (unsigned long long)getTemplateScene;
- (id)funnyInfos;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFunnyInfos:(id)arg1;
- (void).cxx_destruct;
@end

