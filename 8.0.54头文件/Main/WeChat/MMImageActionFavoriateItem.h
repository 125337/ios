@interface MMImageActionFavoriateItem : MMImageActionSheetItem
{
    id /* block */ _modifyBlock; // +0x8
}
- (id)init;
- (void)handleWithImage;
- (id /* block */)modifyBlock;
- (void)setModifyBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

