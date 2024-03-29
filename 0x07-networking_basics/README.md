# Networking basics #0

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# OSI Model

The OSI (Open Systems Interconnection) Model is a conceptual framework that standardizes the functions of a telecommunication or computing system into seven abstraction layers. 

Each layer serves a specific purpose and interacts with adjacent layers, providing a modular approach to understanding and designing network architectures. 

The model was developed by the International Organization for Standardization (ISO) to promote interoperability and compatibility between different systems and vendors.


The OSI Model consists of the following seven layers, listed from the lowest level to the highest level:

 * Physical Layer: Deals with the physical connection between devices, defining characteristics such as voltage levels, data rates, and physical connectors.

 * Data Link Layer: Responsible for creating a reliable link between two directly connected nodes, addressing errors in the physical layer and ensuring the accurate delivery of frames.

 * Network Layer: Manages the routing of data packets between devices on different networks, handling logical addressing and providing routing, forwarding, and congestion control.

 * Transport Layer: Ensures the reliable delivery of data between devices, handling end-to-end communication, error detection, and flow control. This layer is responsible for breaking down large messages into    smaller segments and reassembling them on the receiving end.

 * Session Layer: Establishes, maintains, and terminates communication sessions between applications, managing dialogue control, synchronization, and data exchange.

 * Presentation Layer: Translates data between the application layer and the lower layers, handling data format translation, encryption, compression, and other presentation-related tasks.

 * Application Layer: Provides network services directly to end-users or applications, dealing with high-level protocols such as HTTP, SMTP, and FTP. This layer is the closest to the end-user and interacts dir   ectly with software applications.


How it is organized

The OSI Model is organized in a hierarchical manner, with each layer building upon the services provided by the layers beneath it. 

The model helps in understanding and designing complex network systems by breaking down the communication process into manageable and well-defined layers. 

It also facilitates interoperability between different systems, as long as each system adheres to the specifications of the respective OSI layers.

# What is a LAN

* Typical usage

A LAN, or Local Area Network, is a network of interconnected computers, devices, and resources within a limited geographic area, such as a home, office, or campus. 

The primary purpose of a LAN is to enable the sharing of resources and information among connected devices. LANs typically use high-speed and relatively low-cost connections for data transfer.

LANs are commonly used for various purposes, including:

 * File Sharing: Users on a LAN can share files and documents easily, facilitating collaboration and resource sharing within a localized environment.

 * Printers and Peripherals: Printers, scanners, and other peripherals can be shared among multiple users on a LAN, reducing costs and improving efficiency.

 * Centralized Internet Access: A LAN often connects to the internet through a single gateway, allowing multiple devices to access the internet using a shared connection.

 * Application Sharing: LANs enable the sharing of software applications and databases, which can be accessed by users across the network.

 * Communication: LANs support local communication through services such as email, instant messaging, and video conferencing.

 * Resource Management: LANs make it easier to manage and administer resources, such as user accounts, security settings, and network configurations.

* Typical geographical size

The geographical size of a LAN is relatively small compared to other types of networks. 

While there is no strict definition of the maximum size of a LAN, it typically covers an area such as a single building, a floor of a building, or a campus. 

The distance covered by a LAN is usually limited to a few kilometers. 

Ethernet and Wi-Fi are common technologies used to implement LANs, providing high-speed connectivity for devices within the defined local area. 

As the distance increases, the performance of these technologies may degrade, and other types of networks, such as wide-area networks (WANs), become more suitable.

# What is a WAN

* Typical usage

A WAN, or Wide Area Network, is a type of network that spans a large geographical area, connecting multiple LANs and other network devices across cities, regions, or even countries. 

The primary purpose of a WAN is to facilitate communication and data exchange between devices that are not in close physical proximity. 

WANs use various technologies to transmit data over long distances.

  * Interconnecting LANs: WANs are used to connect multiple LANs, allowing organizations with offices in different locations to share resources, data, and information seamlessly.

  * Internet Connectivity: WANs provide access to the internet, allowing users in different locations to connect to online resources and services. This is crucial for global communication and accessing informa    tion hosted on servers located around the world.

  * Corporate Networking: Large enterprises use WANs to establish a network infrastructure that spans across their various offices and branches. This enables centralized management, communication, and resource    sharing.

  * Telecommunication Networks: WANs are the backbone of telecommunications, connecting telephone networks, mobile networks, and other communication systems across vast distances.

  * Cloud Computing: WANs play a key role in connecting users to cloud-based services and resources. Cloud data centers are often accessed over WANs, enabling users to utilize computing resources and storage h    osted remotely.

  * Remote Access: WANs support remote access to corporate networks, allowing employees to connect to the organization's resources from different locations, whether they are working from home or traveling.

# What is the Internet

The Internet is a global network that interconnects millions of private, public, academic, business, and government networks. It is a vast and decentralized network of networks, allowing users to access information, communicate, and share resources across the globe. The Internet uses a variety of protocols, such as the TCP/IP (Transmission Control Protocol/Internet Protocol) suite, to facilitate communication between devices.

* What is an IP address

An IP address (Internet Protocol address) is a numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication. IP addresses serve two main purposes: host or network interface identification and location addressing. There are two types of IP addresses:

IPv4 Address: This is the most common type of IP address and consists of four sets of numbers separated by dots (e.g., 192.168.0.1). IPv4 addresses are limited in number and are being gradually replaced by IPv6 due to address exhaustion issues.

IPv6 Address: IPv6 (Internet Protocol version 6) addresses were introduced to overcome the limitations of IPv4 by providing a much larger address space. IPv6 addresses are represented as eight groups of hexadecimal digits separated by colons (e.g., 2001:0db8:85a3:0000:0000:8a2e:0370:7334).

* What are the 2 types of IP address

Static IP Address: A static IP address is manually assigned to a device and does not change over time. It provides a simple and stable way for remote computers to contact a specific device.

Dynamic IP Address: A dynamic IP address is automatically assigned to a device by a network's DHCP (Dynamic Host Configuration Protocol) server. Dynamic addressing is more flexible and efficient, especially in large networks where assigning static IP addresses manually can be impractical.

* What is localhost

"Localhost" refers to the loopback address 127.0.0.1 in IPv4 or ::1 in IPv6. It is used to access the network services that are running on the host via the loopback network interface. Essentially, when a program on a computer refers to "localhost," it is directing its communication to the local machine itself.

* What is a subnet

A subnet, or subnetwork, is a logically segmented section of a larger network. Subnetting is used to divide a large IP network into smaller, more manageable segments. This helps in improving network performance, security, and organization. Devices within the same subnet can communicate directly with each other, while communication between subnets usually involves routing.

* Why IPv6 was created

IPv6 was created to address the limitations of IPv4, particularly the exhaustion of available IPv4 addresses. As the number of devices connected to the Internet increased exponentially, the 32-bit address space provided by IPv4 became insufficient to accommodate the growing demand. IPv6, with its 128-bit address space, provides an astronomically larger pool of unique addresses, ensuring the continued growth of the Internet and supporting the increasing number of connected devices. IPv6 also brings improvements in terms of security, efficiency, and additional features compared to IPv4.

# TCP/UDP

* What are the 2 mainly used data transfer protocols for IP (transfer level on the OSI schema)

TCP (Transmission Control Protocol) and UDP (User Datagram Protocol) are two of the main transport layer protocols used for data transfer in IP networks. They operate at the transport layer (Layer 4) of the OSI model.

* What is the main difference between TCP and UDP

The main difference between TCP and UDP lies in their connection-oriented nature and reliability:

TCP (Transmission Control Protocol): Connection-oriented protocol that provides reliable and ordered delivery of data. It establishes a connection before data exchange and ensures that data is received correctly through mechanisms like acknowledgment and retransmission.

UDP (User Datagram Protocol): Connectionless protocol that does not guarantee reliable delivery. It sends data without establishing a connection and does not provide mechanisms for acknowledgment or retransmission. UDP is often used for real-time applications where low latency is critical.

* What is a port

A port is a 16-bit unsigned integer, thus ranging from 0 to 65535, used to identify specific processes to which Internet or network-related messages are sent. Ports allow a single host with a single IP address to run multiple network services simultaneously. Ports are categorized into two types: well-known ports (0-1023), registered ports (1024-49151), and dynamic or private ports (49152-65535).

* Memorize SSH, HTTP and HTTPS port numbers

SSH (Secure Shell): Port 22

HTTP (Hypertext Transfer Protocol): Port 80

HTTPS (Hypertext Transfer Protocol Secure): Port 443

* What tool/protocol is often used to check if a device is connected to a network

The Ping tool, which uses the ICMP (Internet Control Message Protocol), is often used to check if a device is connected to a network. The Ping command sends a small packet of data to a specific IP address and waits for a response. If the target device is reachable and connected, it will reply, confirming the connectivity. The Ping tool is widely used for network troubleshooting and diagnostics.
