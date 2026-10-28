@interface MMKTableViewCellManager : NSObject
{
    Handle<std::shared_ptr<kinda::KTableViewCellManager>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (id)getView;
- (id)getEditActions;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
