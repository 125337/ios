@interface CBTCoopV2CommNativeViewModel : CBTCoopV2AsstBoardViewModel
{
    NSString * _titleText; // +0x8
    NSString * _minVersion; // +0x10
    NSArray * _items; // +0x18
    NSMutableSet * _addedLiteAppIDs; // +0x20
}
+ (id)itemsFromAppMsgNode:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
+ (double)heightForText:(id)arg1 font:(id)arg2 width:(double)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyableText;
- (double)bubbleWidthForCellWidth:(double)arg1;
- (double)bubbleHeightForCellWidth:(double)arg1;
- (double)listWidthForCellWidth:(double)arg1;
- (double)listHeight;
- (id)contentSignature;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)coopV2ReportCardTitle;
- (id)copyContent;
- (id)boardDataController;
- (id)forwardHistoryTitleText;
- (void)openItem:(id)arg1 fromViewController:(id)arg2;
- (void)openLiteAppItem:(id)arg1 fromViewController:(id)arg2;
- (void)openWeAppItem:(id)arg1;
- (id)createAddToolLiteAppStoreForItem:(id)arg1;
- (void)addItemToUserMiniToolList:(id)arg1;
- (BOOL)shouldUseAfterAddLiteAppParamsForItem:(id)arg1;
- (id)liteAppPageForItem:(id)arg1 useAfterAddParams:(BOOL)arg2;
- (id)liteAppQueryForItem:(id)arg1 useAfterAddParams:(BOOL)arg2;
- (void)sendLLMPromptForItem:(id)arg1;
- (void)updateCommNativeDataFromCardWrap:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)addedLiteAppIDs;
- (void)setAddedLiteAppIDs:(id)arg1;
- (void).cxx_destruct;
@end
