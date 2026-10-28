@interface EmoticonCustomReportData : MMObject
+ (void)ReportCustomEmoticonTabClick;
+ (void)ReportCustomEmoticonManageIconClick;
+ (void)ReportEmoticonTabEntranceClick;
+ (id)ReportStringForEmoticonSyncOfAction:(unsigned long long)arg1 andType:(unsigned long long)arg2;
+ (void)ReportEmoticonBoardCustomEmojiShow:(unsigned long long)arg1;
+ (void)ReportHasEmoticonToSyncOfType:(unsigned long long)arg1;
+ (void)ReportAutoStartSyncOfType:(unsigned long long)arg1;
+ (void)ReportEmoticonCustomManageAddClick;
+ (void)ReportEmoticonCustomManageEditClick;
+ (void)ReportEmoticonCustomManageEnterFromCell;
+ (void)ReportEmoticonCustomManageEnterFromOverLimitTips;
+ (void)ReportCustomEmoticonCountWhenStartRecover:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
@end
