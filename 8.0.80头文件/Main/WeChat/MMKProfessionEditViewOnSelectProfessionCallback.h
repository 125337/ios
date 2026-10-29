@interface MMKProfessionEditViewOnSelectProfessionCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onSelectProfession:(id)arg1 professionType:(int)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
