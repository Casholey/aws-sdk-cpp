﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CalculatedLifecycle.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/backup/model/StorageClass.h>
#include <aws/backup/model/VaultType.h>
#include <aws/backup/model/IndexStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class DescribeRecoveryPointResult
  {
  public:
    AWS_BACKUP_API DescribeRecoveryPointResult();
    AWS_BACKUP_API DescribeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline DescribeRecoveryPointResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline DescribeRecoveryPointResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline DescribeRecoveryPointResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the source vault where
     * the resource was originally backed up in; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>. If
     * the recovery is restored to the same Amazon Web Services account or Region, this
     * value will be <code>null</code>.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const{ return m_sourceBackupVaultArn; }
    inline void SetSourceBackupVaultArn(const Aws::String& value) { m_sourceBackupVaultArn = value; }
    inline void SetSourceBackupVaultArn(Aws::String&& value) { m_sourceBackupVaultArn = std::move(value); }
    inline void SetSourceBackupVaultArn(const char* value) { m_sourceBackupVaultArn.assign(value); }
    inline DescribeRecoveryPointResult& WithSourceBackupVaultArn(const Aws::String& value) { SetSourceBackupVaultArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithSourceBackupVaultArn(Aws::String&& value) { SetSourceBackupVaultArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithSourceBackupVaultArn(const char* value) { SetSourceBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeRecoveryPointResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to save as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline DescribeRecoveryPointResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline DescribeRecoveryPointResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdBy = value; }
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdBy = std::move(value); }
    inline DescribeRecoveryPointResult& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}
    inline DescribeRecoveryPointResult& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }
    inline DescribeRecoveryPointResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point.</p> <p>
     * <code>PARTIAL</code> status indicates Backup could not create the recovery point
     * before the backup window closed. To increase your backup plan window using the
     * API, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_UpdateBackupPlan.html">UpdateBackupPlan</a>.
     * You can also increase your backup plan window using the Console by choosing and
     * editing your backup plan.</p> <p> <code>EXPIRED</code> status indicates that the
     * recovery point has exceeded its retention period, but Backup lacks permission or
     * is otherwise unable to delete it. To manually delete these recovery points, see
     * <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/gs-cleanup-resources.html#cleanup-backups">
     * Step 3: Delete the recovery points</a> in the <i>Clean up resources</i> section
     * of <i>Getting started</i>.</p> <p> <code>STOPPED</code> status occurs on a
     * continuous backup where a user has taken some action that causes the continuous
     * backup to be disabled. This can be caused by the removal of permissions, turning
     * off versioning, turning off events being sent to EventBridge, or disabling the
     * EventBridge rules that are put in place by Backup. For recovery points of Amazon
     * S3, Amazon RDS, and Amazon Aurora resources, this status occurs when the
     * retention period of a continuous backup rule is changed.</p> <p>To resolve
     * <code>STOPPED</code> status, ensure that all requested permissions are in place
     * and that versioning is enabled on the S3 bucket. Once these conditions are met,
     * the next instance of a backup rule running will result in a new continuous
     * recovery point being created. The recovery points with STOPPED status do not
     * need to be deleted.</p> <p>For SAP HANA on Amazon EC2 <code>STOPPED</code>
     * status occurs due to user action, application misconfiguration, or backup
     * failure. To ensure that future continuous backups succeed, refer to the recovery
     * point status and check SAP HANA for details.</p>
     */
    inline const RecoveryPointStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RecoveryPointStatus& value) { m_status = value; }
    inline void SetStatus(RecoveryPointStatus&& value) { m_status = std::move(value); }
    inline DescribeRecoveryPointResult& WithStatus(const RecoveryPointStatus& value) { SetStatus(value); return *this;}
    inline DescribeRecoveryPointResult& WithStatus(RecoveryPointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message explaining the status of the recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribeRecoveryPointResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribeRecoveryPointResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeRecoveryPointResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeRecoveryPointResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }
    inline DescribeRecoveryPointResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline DescribeRecoveryPointResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytes = value; }
    inline DescribeRecoveryPointResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline const CalculatedLifecycle& GetCalculatedLifecycle() const{ return m_calculatedLifecycle; }
    inline void SetCalculatedLifecycle(const CalculatedLifecycle& value) { m_calculatedLifecycle = value; }
    inline void SetCalculatedLifecycle(CalculatedLifecycle&& value) { m_calculatedLifecycle = std::move(value); }
    inline DescribeRecoveryPointResult& WithCalculatedLifecycle(const CalculatedLifecycle& value) { SetCalculatedLifecycle(value); return *this;}
    inline DescribeRecoveryPointResult& WithCalculatedLifecycle(CalculatedLifecycle&& value) { SetCalculatedLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define.</p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that can transition to cold storage are listed in the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table. Backup ignores this expression for other
     * resource types.</p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycle = value; }
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycle = std::move(value); }
    inline DescribeRecoveryPointResult& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}
    inline DescribeRecoveryPointResult& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool GetIsEncrypted() const{ return m_isEncrypted; }
    inline void SetIsEncrypted(bool value) { m_isEncrypted = value; }
    inline DescribeRecoveryPointResult& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }
    inline void SetStorageClass(const StorageClass& value) { m_storageClass = value; }
    inline void SetStorageClass(StorageClass&& value) { m_storageClass = std::move(value); }
    inline DescribeRecoveryPointResult& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}
    inline DescribeRecoveryPointResult& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRestoreTime() const{ return m_lastRestoreTime; }
    inline void SetLastRestoreTime(const Aws::Utils::DateTime& value) { m_lastRestoreTime = value; }
    inline void SetLastRestoreTime(Aws::Utils::DateTime&& value) { m_lastRestoreTime = std::move(value); }
    inline DescribeRecoveryPointResult& WithLastRestoreTime(const Aws::Utils::DateTime& value) { SetLastRestoreTime(value); return *this;}
    inline DescribeRecoveryPointResult& WithLastRestoreTime(Aws::Utils::DateTime&& value) { SetLastRestoreTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an ARN that uniquely identifies a parent (composite) recovery point;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const{ return m_parentRecoveryPointArn; }
    inline void SetParentRecoveryPointArn(const Aws::String& value) { m_parentRecoveryPointArn = value; }
    inline void SetParentRecoveryPointArn(Aws::String&& value) { m_parentRecoveryPointArn = std::move(value); }
    inline void SetParentRecoveryPointArn(const char* value) { m_parentRecoveryPointArn.assign(value); }
    inline DescribeRecoveryPointResult& WithParentRecoveryPointArn(const Aws::String& value) { SetParentRecoveryPointArn(value); return *this;}
    inline DescribeRecoveryPointResult& WithParentRecoveryPointArn(Aws::String&& value) { SetParentRecoveryPointArn(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithParentRecoveryPointArn(const char* value) { SetParentRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a resource within a composite group, such as nested (child)
     * recovery point belonging to a composite (parent) stack. The ID is transferred
     * from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline const Aws::String& GetCompositeMemberIdentifier() const{ return m_compositeMemberIdentifier; }
    inline void SetCompositeMemberIdentifier(const Aws::String& value) { m_compositeMemberIdentifier = value; }
    inline void SetCompositeMemberIdentifier(Aws::String&& value) { m_compositeMemberIdentifier = std::move(value); }
    inline void SetCompositeMemberIdentifier(const char* value) { m_compositeMemberIdentifier.assign(value); }
    inline DescribeRecoveryPointResult& WithCompositeMemberIdentifier(const Aws::String& value) { SetCompositeMemberIdentifier(value); return *this;}
    inline DescribeRecoveryPointResult& WithCompositeMemberIdentifier(Aws::String&& value) { SetCompositeMemberIdentifier(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithCompositeMemberIdentifier(const char* value) { SetCompositeMemberIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the boolean value that a recovery point is a parent (composite)
     * job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline void SetIsParent(bool value) { m_isParent = value; }
    inline DescribeRecoveryPointResult& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }
    inline DescribeRecoveryPointResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline DescribeRecoveryPointResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline const VaultType& GetVaultType() const{ return m_vaultType; }
    inline void SetVaultType(const VaultType& value) { m_vaultType = value; }
    inline void SetVaultType(VaultType&& value) { m_vaultType = std::move(value); }
    inline DescribeRecoveryPointResult& WithVaultType(const VaultType& value) { SetVaultType(value); return *this;}
    inline DescribeRecoveryPointResult& WithVaultType(VaultType&& value) { SetVaultType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatus = std::move(value); }
    inline DescribeRecoveryPointResult& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline DescribeRecoveryPointResult& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const{ return m_indexStatusMessage; }
    inline void SetIndexStatusMessage(const Aws::String& value) { m_indexStatusMessage = value; }
    inline void SetIndexStatusMessage(Aws::String&& value) { m_indexStatusMessage = std::move(value); }
    inline void SetIndexStatusMessage(const char* value) { m_indexStatusMessage.assign(value); }
    inline DescribeRecoveryPointResult& WithIndexStatusMessage(const Aws::String& value) { SetIndexStatusMessage(value); return *this;}
    inline DescribeRecoveryPointResult& WithIndexStatusMessage(Aws::String&& value) { SetIndexStatusMessage(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithIndexStatusMessage(const char* value) { SetIndexStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRecoveryPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRecoveryPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRecoveryPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_sourceBackupVaultArn;

    Aws::String m_resourceArn;

    Aws::String m_resourceType;

    RecoveryPointCreator m_createdBy;

    Aws::String m_iamRoleArn;

    RecoveryPointStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    long long m_backupSizeInBytes;

    CalculatedLifecycle m_calculatedLifecycle;

    Lifecycle m_lifecycle;

    Aws::String m_encryptionKeyArn;

    bool m_isEncrypted;

    StorageClass m_storageClass;

    Aws::Utils::DateTime m_lastRestoreTime;

    Aws::String m_parentRecoveryPointArn;

    Aws::String m_compositeMemberIdentifier;

    bool m_isParent;

    Aws::String m_resourceName;

    VaultType m_vaultType;

    IndexStatus m_indexStatus;

    Aws::String m_indexStatusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
