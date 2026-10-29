@interface MMSystemAuthCancellableToken : NSObject
{
    BOOL _isCancelled; // +0x8
    BOOL _isCompleted; // +0x9
    MMPageSheetBaseView * _sheetView; // +0x10
}
+ (id)CompletedInstance;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (BOOL)isCompleted;
- (void)setIsCompleted:(BOOL)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end

