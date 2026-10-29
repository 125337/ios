@interface MMInputBarPlugin : NSObject <InputBarApi, CNContactPickerDelegate, MMFlutterPlugin>
{
    id /* block */ _contactPickerCompletion; // +0x8
}
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)loadShortbarEmojisConfigName:(id)arg1 error:(id *)arg2;
- (void)getAutoFillContentType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id /* block */)contactPickerCompletion;
- (void)setContactPickerCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
