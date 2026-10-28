@interface TingAddItemsToListNotify : NSObject <MMFlutterPlugin, TingAddItemsToListNotify>
{
    BOOL _notified; // +0x8
    id /* block */ _completion; // +0x10
}
- (id)initWithCompletion:(id /* block */)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAddItemsSuccessWithError:(id *)arg1;
- (void)onPickListSuccessAlbumData:(id)arg1 error:(id *)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)notified;
- (void)setNotified:(BOOL)arg1;
- (void).cxx_destruct;
@end
