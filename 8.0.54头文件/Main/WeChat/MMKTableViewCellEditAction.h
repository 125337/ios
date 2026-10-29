@interface MMKTableViewCellEditAction : NSObject
{
    Handle<std::shared_ptr<kinda::KTableViewCellEditAction>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (BOOL)getIsDestructive;
- (id)getTitle;
- (void)triggered;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

