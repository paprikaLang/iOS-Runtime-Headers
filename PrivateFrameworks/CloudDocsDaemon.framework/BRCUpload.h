/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUpload : NSObject <BRCTransfer> {
    BRCClientZone * _clientZone;
    unsigned int  _doneSize;
    BRCItemID * _itemID;
    BRCProgress * _progress;
    BOOL  _progressPublished;
    CKRecord * _record;
    NSString * _stageID;
    int  _throttleID;
    unsigned int  _totalSize;
}

@property (nonatomic) unsigned int doneSize;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) BOOL progressPublished;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) CKRecord *secondaryRecord;
@property (nonatomic, readonly) CKRecordID *secondaryRecordID;
@property (nonatomic, readonly) NSString *stageID;
@property (nonatomic, readonly) int throttleID;
@property (nonatomic, readonly) unsigned int totalSize;
@property (nonatomic, readonly) NSNumber *transferID;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)doneSize;
- (id)etag;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned int)arg3;
- (id)itemID;
- (id)progress;
- (BOOL)progressPublished;
- (id)record;
- (id)recordID;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setDoneSize:(unsigned int)arg1;
- (void)setProgressPublished:(BOOL)arg1;
- (void)setRecord:(id)arg1;
- (void)setSecondaryRecord:(id)arg1;
- (id)stageID;
- (int)throttleID;
- (unsigned int)totalSize;
- (id)transferID;

@end