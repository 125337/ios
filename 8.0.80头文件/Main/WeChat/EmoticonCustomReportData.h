@interface EmoticonCustomReportData : MMObject
+ (void)ReportCustomEmoticonTabClick;
+ (void)ReportCustomEmoticonManageIconClick;
+ (void)ReportEmoticonTabEntranceClick;
+ (id)ReportStringForEmoticonSyncOfAction:(unsigned long long)arg1 andType:(unsigned long long)arg2;
+ (void)ReportEmoticonBoardCustomEmojiShow:(unsigned long long)arg1;
+ (void)ReportHasEmoticonToSyncOfType:(unsigned long long)arg1;
+ (void)ReportAutoStartSyncOfType:(unsigned long long)arg1;
+ (void)ReportEmoticonCustomManageAddClick:(int)arg1;
+ (void)ReportEmoticonCustomManageEditClick:(int)arg1;
+ (void)ReportEmoticonCustomManageEnterFromCell;
+ (void)ReportEmoticonCustomManageEnterFromOverLimitTips;
+ (void)ReportEmoticonShowOverLimitTipsAlert;
+ (void)ReportEmoticonShowOverLimitTipsAlertCancel;
+ (void)ReportEmoticonCustomManageAddSuccessfully:(int)arg1 sucNum:(int)arg2 failNum:(int)arg3;
+ (void)ReportEmoticonCustomManageExposed:(int)arg1;
+ (void)ReportCustomEmoticonCountWhenStartRecover:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
@end
