/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBatchUploader : NSObject {
    NSMutableSet * _cameraAsset;
    NSMutableSet * _downloadedDeleteUuid;
    bool  _initialUpload;
    PLPhotoLibrary * _photoLibrary;
    bool  _shouldGenerateDerivatives;
    NSMutableArray * _uploadBatchArray;
}

@property bool initialUpload;
@property bool shouldGenerateDerivatives;

- (void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 isInsert:(bool)arg3 seenAssetUuid:(id)arg4;
- (void)_addLocalResourcesToRecord:(id)arg1;
- (void)_cleanUploadedResources:(id)arg1;
- (id)_fetchChangesFromEvent:(id)arg1 shouldTriggerPrefetch:(bool*)arg2;
- (id)_getLocalRecordFromCPLRecord:(id)arg1;
- (void)_handleInvalidAsset:(id)arg1;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1;
- (bool)_isKnownDeletionForUuid:(id)arg1;
- (bool)_needsToIncludeMaster:(id)arg1 forAsset:(id)arg2;
- (id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)arg1;
- (void)_processAlbumDeletes:(id)arg1 albumInserts:(id)arg2 albumChanges:(id)arg3 withBatchManager:(id)arg4;
- (void)_processChangeToFullRecordCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processIncludeMasterCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processPendingObjects:(id)arg1 withBatchManager:(id)arg2;
- (void)_processQuarantineRecordsCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (bool)_processRepushAlbumError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_push:(id)arg1;
- (void)_pushBatches:(id)arg1;
- (void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)_sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)_sendOneBatch:(id)arg1 toBatchManager:(id)arg2;
- (void)_sortData:(id)arg1 isInsert:(bool)arg2 forUploadChanges:(id)arg3 shouldTriggerPrefetch:(bool*)arg4 inManagedObjectContext:(id)arg5;
- (void)_sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2;
- (void)addBatches:(id)arg1;
- (void)clearUploadArray;
- (id)createBatchesForChanges:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 withUploadTracker:(id)arg4;
- (id)createUploadBatchesForDeletionFromEvent:(id)arg1;
- (void)dealloc;
- (void)handleUploadBatchesForDeletionFromEvent:(id)arg1;
- (void)handleUploadBatchesFromEvent:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 shouldTriggerPrefetch:(bool*)arg4 withUploadTracker:(id)arg5;
- (bool)hasBatchesToUpload;
- (id)initWithLibrary:(id)arg1;
- (bool)initialUpload;
- (unsigned long long)numberOfBatchesToUpload;
- (id)pop;
- (id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 withUploadTracker:(id)arg4;
- (void)quarantineRecord:(id)arg1;
- (void)recordDeletionOnUuids:(id)arg1;
- (void)setInitialUpload:(bool)arg1;
- (void)setShouldGenerateDerivatives:(bool)arg1;
- (bool)shouldGenerateDerivatives;
- (bool)shouldProcessDuringInitialUpload:(id)arg1;
- (void)tryToFixCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)uploadFullPhotoLibraryToCloud;

@end
