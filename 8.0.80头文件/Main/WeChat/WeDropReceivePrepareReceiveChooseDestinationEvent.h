@interface WeDropReceivePrepareReceiveChooseDestinationEvent : WeDropReceiveEvent <WeDropReceiveFileDestinationHelper, UIDocumentPickerDelegate, INearConnectionServiceExt>
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)chooseFileDestination:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
@end
