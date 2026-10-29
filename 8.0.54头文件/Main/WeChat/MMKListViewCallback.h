@interface MMKListViewCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KListViewCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (int)getCount;
- (int)getViewType:(int)arg1;
- (int)getViewTypeCount;
- (id)fillData:(int)arg1 contentView:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

