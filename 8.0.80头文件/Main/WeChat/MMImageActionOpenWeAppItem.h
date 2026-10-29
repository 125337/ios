@interface MMImageActionOpenWeAppItem : MMImageActionSheetItem
{
    WAReportOpenMaterialItem * _materialItem; // +0x8
    WAWxMaterialOpenInfo * _openInfo; // +0x10
}
- (id)init;
- (void)handleWithImage;
- (id)materialItem;
- (void)setMaterialItem:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (void).cxx_destruct;
@end
