@interface WCFinderPostMusicFilePickerAdapter : NSObject <UIDocumentPickerDelegate>
{
    id /* block */ _onCancel; // +0x8
    id /* block */ _onComplete; // +0x10
}
+ (id)showPicker:(id)arg1 fromVC:(id)arg2 onCancel:(id /* block */)arg3 onComplete:(id /* block */)arg4;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onComplete;
- (void)setOnComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

