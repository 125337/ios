@interface WCMicroMerchantFoldSettings : NSObject
{
    NSObject<OS_dispatch_queue> * _dataQueue; // +0x8
    BOOL _isGenerating; // +0x10
    WCMicroMerchantFoldInfo * _foldInfo; // +0x18
}
+ (id)foldInfoSavePath;
- (id)init;
- (void)willStartGenerating;
- (void)didFinishGeneratingWithUnfoldedUsernames:(id)arg1;
- (id)generatedTime;
- (id)unfoldedUsernames;
- (void)asyncLoadFoldInfo;
- (void)asyncSaveFoldInfo;
- (BOOL)isGenerating;
- (id)foldInfo;
- (void).cxx_destruct;
@end

