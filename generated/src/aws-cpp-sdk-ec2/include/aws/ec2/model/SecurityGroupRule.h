﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReferencedSecurityGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a security group rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupRule">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRule
  {
  public:
    AWS_EC2_API SecurityGroupRule();
    AWS_EC2_API SecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const{ return m_securityGroupRuleId; }
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }
    inline void SetSecurityGroupRuleId(const Aws::String& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = value; }
    inline void SetSecurityGroupRuleId(Aws::String&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::move(value); }
    inline void SetSecurityGroupRuleId(const char* value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId.assign(value); }
    inline SecurityGroupRule& WithSecurityGroupRuleId(const Aws::String& value) { SetSecurityGroupRuleId(value); return *this;}
    inline SecurityGroupRule& WithSecurityGroupRuleId(Aws::String&& value) { SetSecurityGroupRuleId(std::move(value)); return *this;}
    inline SecurityGroupRule& WithSecurityGroupRuleId(const char* value) { SetSecurityGroupRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline SecurityGroupRule& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline SecurityGroupRule& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline SecurityGroupRule& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the security group. </p>
     */
    inline const Aws::String& GetGroupOwnerId() const{ return m_groupOwnerId; }
    inline bool GroupOwnerIdHasBeenSet() const { return m_groupOwnerIdHasBeenSet; }
    inline void SetGroupOwnerId(const Aws::String& value) { m_groupOwnerIdHasBeenSet = true; m_groupOwnerId = value; }
    inline void SetGroupOwnerId(Aws::String&& value) { m_groupOwnerIdHasBeenSet = true; m_groupOwnerId = std::move(value); }
    inline void SetGroupOwnerId(const char* value) { m_groupOwnerIdHasBeenSet = true; m_groupOwnerId.assign(value); }
    inline SecurityGroupRule& WithGroupOwnerId(const Aws::String& value) { SetGroupOwnerId(value); return *this;}
    inline SecurityGroupRule& WithGroupOwnerId(Aws::String&& value) { SetGroupOwnerId(std::move(value)); return *this;}
    inline SecurityGroupRule& WithGroupOwnerId(const char* value) { SetGroupOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the security group rule is an outbound rule.</p>
     */
    inline bool GetIsEgress() const{ return m_isEgress; }
    inline bool IsEgressHasBeenSet() const { return m_isEgressHasBeenSet; }
    inline void SetIsEgress(bool value) { m_isEgressHasBeenSet = true; m_isEgress = value; }
    inline SecurityGroupRule& WithIsEgress(bool value) { SetIsEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>Use <code>-1</code> to specify all protocols.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline SecurityGroupRule& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline SecurityGroupRule& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline SecurityGroupRule& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline SecurityGroupRule& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP code or -1 (all ICMP codes). If the
     * start port is -1 (all ICMP types), then the end port must be -1 (all ICMP
     * codes).</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline SecurityGroupRule& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR range.</p>
     */
    inline const Aws::String& GetCidrIpv4() const{ return m_cidrIpv4; }
    inline bool CidrIpv4HasBeenSet() const { return m_cidrIpv4HasBeenSet; }
    inline void SetCidrIpv4(const Aws::String& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = value; }
    inline void SetCidrIpv4(Aws::String&& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = std::move(value); }
    inline void SetCidrIpv4(const char* value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4.assign(value); }
    inline SecurityGroupRule& WithCidrIpv4(const Aws::String& value) { SetCidrIpv4(value); return *this;}
    inline SecurityGroupRule& WithCidrIpv4(Aws::String&& value) { SetCidrIpv4(std::move(value)); return *this;}
    inline SecurityGroupRule& WithCidrIpv4(const char* value) { SetCidrIpv4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR range.</p>
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::move(value); }
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }
    inline SecurityGroupRule& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}
    inline SecurityGroupRule& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(std::move(value)); return *this;}
    inline SecurityGroupRule& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline SecurityGroupRule& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline SecurityGroupRule& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline SecurityGroupRule& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the security group that is referenced in the rule.</p>
     */
    inline const ReferencedSecurityGroup& GetReferencedGroupInfo() const{ return m_referencedGroupInfo; }
    inline bool ReferencedGroupInfoHasBeenSet() const { return m_referencedGroupInfoHasBeenSet; }
    inline void SetReferencedGroupInfo(const ReferencedSecurityGroup& value) { m_referencedGroupInfoHasBeenSet = true; m_referencedGroupInfo = value; }
    inline void SetReferencedGroupInfo(ReferencedSecurityGroup&& value) { m_referencedGroupInfoHasBeenSet = true; m_referencedGroupInfo = std::move(value); }
    inline SecurityGroupRule& WithReferencedGroupInfo(const ReferencedSecurityGroup& value) { SetReferencedGroupInfo(value); return *this;}
    inline SecurityGroupRule& WithReferencedGroupInfo(ReferencedSecurityGroup&& value) { SetReferencedGroupInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityGroupRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityGroupRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityGroupRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SecurityGroupRule& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SecurityGroupRule& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SecurityGroupRule& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SecurityGroupRule& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleArn() const{ return m_securityGroupRuleArn; }
    inline bool SecurityGroupRuleArnHasBeenSet() const { return m_securityGroupRuleArnHasBeenSet; }
    inline void SetSecurityGroupRuleArn(const Aws::String& value) { m_securityGroupRuleArnHasBeenSet = true; m_securityGroupRuleArn = value; }
    inline void SetSecurityGroupRuleArn(Aws::String&& value) { m_securityGroupRuleArnHasBeenSet = true; m_securityGroupRuleArn = std::move(value); }
    inline void SetSecurityGroupRuleArn(const char* value) { m_securityGroupRuleArnHasBeenSet = true; m_securityGroupRuleArn.assign(value); }
    inline SecurityGroupRule& WithSecurityGroupRuleArn(const Aws::String& value) { SetSecurityGroupRuleArn(value); return *this;}
    inline SecurityGroupRule& WithSecurityGroupRuleArn(Aws::String&& value) { SetSecurityGroupRuleArn(std::move(value)); return *this;}
    inline SecurityGroupRule& WithSecurityGroupRuleArn(const char* value) { SetSecurityGroupRuleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupOwnerId;
    bool m_groupOwnerIdHasBeenSet = false;

    bool m_isEgress;
    bool m_isEgressHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::String m_cidrIpv4;
    bool m_cidrIpv4HasBeenSet = false;

    Aws::String m_cidrIpv6;
    bool m_cidrIpv6HasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    ReferencedSecurityGroup m_referencedGroupInfo;
    bool m_referencedGroupInfoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_securityGroupRuleArn;
    bool m_securityGroupRuleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
